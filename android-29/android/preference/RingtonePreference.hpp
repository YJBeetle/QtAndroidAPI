#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Preference.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::preference
{
	class PreferenceManager;
}

namespace __jni_impl::android::preference
{
	class RingtonePreference : public __jni_impl::android::preference::Preference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jint getRingtoneType();
		jboolean getShowDefault();
		jboolean getShowSilent();
		jboolean onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		void setRingtoneType(jint arg0);
		void setShowDefault(jboolean arg0);
		void setShowSilent(jboolean arg0);
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/res/TypedArray.hpp"
#include "../net/Uri.hpp"
#include "./PreferenceManager.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void RingtonePreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void RingtonePreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RingtonePreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void RingtonePreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint RingtonePreference::getRingtoneType()
	{
		return __thiz.callMethod<jint>(
			"getRingtoneType",
			"()I"
		);
	}
	jboolean RingtonePreference::getShowDefault()
	{
		return __thiz.callMethod<jboolean>(
			"getShowDefault",
			"()Z"
		);
	}
	jboolean RingtonePreference::getShowSilent()
	{
		return __thiz.callMethod<jboolean>(
			"getShowSilent",
			"()Z"
		);
	}
	jboolean RingtonePreference::onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onActivityResult",
			"(IILandroid/content/Intent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RingtonePreference::setRingtoneType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRingtoneType",
			"(I)V",
			arg0
		);
	}
	void RingtonePreference::setShowDefault(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowDefault",
			"(Z)V",
			arg0
		);
	}
	void RingtonePreference::setShowSilent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowSilent",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class RingtonePreference : public __jni_impl::android::preference::RingtonePreference
	{
	public:
		RingtonePreference(QAndroidJniObject obj) { __thiz = obj; }
		RingtonePreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		RingtonePreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RingtonePreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		RingtonePreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

