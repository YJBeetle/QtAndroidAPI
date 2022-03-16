#include "../../graphics/Typeface.hpp"
#include "./CaptioningManager_CaptionStyle.hpp"

namespace android::view::accessibility
{
	// Fields
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_DEPRESSED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_DEPRESSED"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_DROP_SHADOW()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_DROP_SHADOW"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_NONE"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_OUTLINE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_OUTLINE"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_RAISED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_RAISED"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_UNSPECIFIED"
		);
	}
	jint CaptioningManager_CaptionStyle::backgroundColor()
	{
		return getField<jint>(
			"backgroundColor"
		);
	}
	jint CaptioningManager_CaptionStyle::edgeColor()
	{
		return getField<jint>(
			"edgeColor"
		);
	}
	jint CaptioningManager_CaptionStyle::edgeType()
	{
		return getField<jint>(
			"edgeType"
		);
	}
	jint CaptioningManager_CaptionStyle::foregroundColor()
	{
		return getField<jint>(
			"foregroundColor"
		);
	}
	jint CaptioningManager_CaptionStyle::windowColor()
	{
		return getField<jint>(
			"windowColor"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::Typeface CaptioningManager_CaptionStyle::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasBackgroundColor() const
	{
		return callMethod<jboolean>(
			"hasBackgroundColor",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasEdgeColor() const
	{
		return callMethod<jboolean>(
			"hasEdgeColor",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasEdgeType() const
	{
		return callMethod<jboolean>(
			"hasEdgeType",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasForegroundColor() const
	{
		return callMethod<jboolean>(
			"hasForegroundColor",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasWindowColor() const
	{
		return callMethod<jboolean>(
			"hasWindowColor",
			"()Z"
		);
	}
} // namespace android::view::accessibility

