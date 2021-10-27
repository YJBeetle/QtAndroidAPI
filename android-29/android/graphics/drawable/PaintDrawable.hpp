#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "ShapeDrawable.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::graphics::drawable
{
	class PaintDrawable : public __jni_impl::android::graphics::drawable::ShapeDrawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		void setCornerRadii(jfloatArray arg0);
		void setCornerRadius(jfloat arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void PaintDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.PaintDrawable",
			"()V"
		);
	}
	void PaintDrawable::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.PaintDrawable",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void PaintDrawable::setCornerRadii(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0
		);
	}
	void PaintDrawable::setCornerRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class PaintDrawable : public __jni_impl::android::graphics::drawable::PaintDrawable
	{
	public:
		PaintDrawable(QAndroidJniObject obj) { __thiz = obj; }
		PaintDrawable()
		{
			__constructor();
		}
		PaintDrawable(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

