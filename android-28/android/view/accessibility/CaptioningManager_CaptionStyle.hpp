#pragma once

#include "../../graphics/Typeface.def.hpp"
#include "../../../JString.hpp"
#include "./CaptioningManager_CaptionStyle.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_DEPRESSED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_DEPRESSED"
		);
	}
	inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_DROP_SHADOW()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_DROP_SHADOW"
		);
	}
	inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_NONE"
		);
	}
	inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_OUTLINE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_OUTLINE"
		);
	}
	inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_RAISED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_RAISED"
		);
	}
	inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_UNSPECIFIED"
		);
	}
	inline jint CaptioningManager_CaptionStyle::backgroundColor()
	{
		return getField<jint>(
			"backgroundColor"
		);
	}
	inline jint CaptioningManager_CaptionStyle::edgeColor()
	{
		return getField<jint>(
			"edgeColor"
		);
	}
	inline jint CaptioningManager_CaptionStyle::edgeType()
	{
		return getField<jint>(
			"edgeType"
		);
	}
	inline jint CaptioningManager_CaptionStyle::foregroundColor()
	{
		return getField<jint>(
			"foregroundColor"
		);
	}
	inline jint CaptioningManager_CaptionStyle::windowColor()
	{
		return getField<jint>(
			"windowColor"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Typeface CaptioningManager_CaptionStyle::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	inline jboolean CaptioningManager_CaptionStyle::hasBackgroundColor() const
	{
		return callMethod<jboolean>(
			"hasBackgroundColor",
			"()Z"
		);
	}
	inline jboolean CaptioningManager_CaptionStyle::hasEdgeColor() const
	{
		return callMethod<jboolean>(
			"hasEdgeColor",
			"()Z"
		);
	}
	inline jboolean CaptioningManager_CaptionStyle::hasEdgeType() const
	{
		return callMethod<jboolean>(
			"hasEdgeType",
			"()Z"
		);
	}
	inline jboolean CaptioningManager_CaptionStyle::hasForegroundColor() const
	{
		return callMethod<jboolean>(
			"hasForegroundColor",
			"()Z"
		);
	}
	inline jboolean CaptioningManager_CaptionStyle::hasWindowColor() const
	{
		return callMethod<jboolean>(
			"hasWindowColor",
			"()Z"
		);
	}
} // namespace android::view::accessibility

// Base class headers

