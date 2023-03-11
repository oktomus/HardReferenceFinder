// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;
class FWorkflowAllowedTabSet;
class FBlueprintEditor;
class FAssetEditorToolkit;

class FHardReferenceViewerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
private:
	void RegisterBlueprintTabs(FWorkflowAllowedTabSet& TabManager, FName ModeName, TSharedPtr<FBlueprintEditor> InBlueprintEditor) const;

	FDelegateHandle RegisteredHandle;
};
