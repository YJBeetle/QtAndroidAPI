#pragma once

#include "./ClipData.def.hpp"
#include "./ClipDescription.def.hpp"
#include "../../JString.hpp"
#include "./ClipboardManager.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ClipboardManager::addPrimaryClipChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addPrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.object()
		);
	}
	inline void ClipboardManager::clearPrimaryClip() const
	{
		callMethod<void>(
			"clearPrimaryClip",
			"()V"
		);
	}
	inline android::content::ClipData ClipboardManager::getPrimaryClip() const
	{
		return callObjectMethod(
			"getPrimaryClip",
			"()Landroid/content/ClipData;"
		);
	}
	inline android::content::ClipDescription ClipboardManager::getPrimaryClipDescription() const
	{
		return callObjectMethod(
			"getPrimaryClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	inline JString ClipboardManager::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ClipboardManager::hasPrimaryClip() const
	{
		return callMethod<jboolean>(
			"hasPrimaryClip",
			"()Z"
		);
	}
	inline jboolean ClipboardManager::hasText() const
	{
		return callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	inline void ClipboardManager::removePrimaryClipChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removePrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.object()
		);
	}
	inline void ClipboardManager::setPrimaryClip(android::content::ClipData arg0) const
	{
		callMethod<void>(
			"setPrimaryClip",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	inline void ClipboardManager::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::content

// Base class headers
#include "../text/ClipboardManager.hpp"

