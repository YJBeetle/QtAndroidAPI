#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE
#define ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Typeface;
}

namespace __jni_impl::android::view::accessibility
{
	class CaptioningManager_CaptionStyle : public __JniBaseClass
	{
	public:
		// Fields
		static jint EDGE_TYPE_DEPRESSED();
		static jint EDGE_TYPE_DROP_SHADOW();
		static jint EDGE_TYPE_NONE();
		static jint EDGE_TYPE_OUTLINE();
		static jint EDGE_TYPE_RAISED();
		static jint EDGE_TYPE_UNSPECIFIED();
		jint backgroundColor();
		jint edgeColor();
		jint edgeType();
		jint foregroundColor();
		jint windowColor();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getTypeface();
		jboolean hasBackgroundColor();
		jboolean hasForegroundColor();
		jboolean hasEdgeType();
		jboolean hasEdgeColor();
		jboolean hasWindowColor();
	};
} // namespace __jni_impl::android::view::accessibility

#include "../../graphics/Typeface.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_DEPRESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_DEPRESSED"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_DROP_SHADOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_DROP_SHADOW"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_NONE"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_OUTLINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_OUTLINE"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_RAISED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_RAISED"
		);
	}
	jint CaptioningManager_CaptionStyle::EDGE_TYPE_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"EDGE_TYPE_UNSPECIFIED"
		);
	}
	jint CaptioningManager_CaptionStyle::backgroundColor()
	{
		return __thiz.getField<jint>(
			"backgroundColor"
		);
	}
	jint CaptioningManager_CaptionStyle::edgeColor()
	{
		return __thiz.getField<jint>(
			"edgeColor"
		);
	}
	jint CaptioningManager_CaptionStyle::edgeType()
	{
		return __thiz.getField<jint>(
			"edgeType"
		);
	}
	jint CaptioningManager_CaptionStyle::foregroundColor()
	{
		return __thiz.getField<jint>(
			"foregroundColor"
		);
	}
	jint CaptioningManager_CaptionStyle::windowColor()
	{
		return __thiz.getField<jint>(
			"windowColor"
		);
	}
	
	// Constructors
	void CaptioningManager_CaptionStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.CaptioningManager$CaptionStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CaptioningManager_CaptionStyle::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasBackgroundColor()
	{
		return __thiz.callMethod<jboolean>(
			"hasBackgroundColor",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasForegroundColor()
	{
		return __thiz.callMethod<jboolean>(
			"hasForegroundColor",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasEdgeType()
	{
		return __thiz.callMethod<jboolean>(
			"hasEdgeType",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasEdgeColor()
	{
		return __thiz.callMethod<jboolean>(
			"hasEdgeColor",
			"()Z"
		);
	}
	jboolean CaptioningManager_CaptionStyle::hasWindowColor()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindowColor",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class CaptioningManager_CaptionStyle : public __jni_impl::android::view::accessibility::CaptioningManager_CaptionStyle
	{
	public:
		CaptioningManager_CaptionStyle(QAndroidJniObject obj) { __thiz = obj; }
		CaptioningManager_CaptionStyle()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE

