/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

#pragma once

#include <AzToolsFramework/ToolsComponents/EditorComponentBase.h>

#include "DebugDrawTextComponent.h"
#include "EditorDebugDrawComponentCommon.h"

namespace DebugDraw
{
    class EditorDebugDrawTextComponent
        : public AzToolsFramework::Components::EditorComponentBase
    {
        friend class DebugDrawSystemComponent;
    public:
        AZ_EDITOR_COMPONENT(EditorDebugDrawTextComponent, "{1B61B17F-AEE3-4AEB-A4E4-2BB053FB45D9}", AzToolsFramework::Components::EditorComponentBase);
        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        // EditorComponentBase
        void BuildGameEntity(AZ::Entity* gameEntity) override;


        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;

    protected:

        void OnPropertyUpdate();

        DebugDrawTextElement m_element;
        EditorDebugDrawComponentSettings m_settings;
    };
}
