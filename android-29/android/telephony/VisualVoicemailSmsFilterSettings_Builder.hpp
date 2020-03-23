#pragma once

#ifndef ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER
#define ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony
{
	class VisualVoicemailSmsFilterSettings;
}

namespace __jni_impl::android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setClientPrefix(jstring arg0);
		QAndroidJniObject setOriginatingNumbers(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setDestinationPort(jint arg0);
	};
} // namespace __jni_impl::android::telephony

#include "VisualVoicemailSmsFilterSettings.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void VisualVoicemailSmsFilterSettings_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailSmsFilterSettings$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/VisualVoicemailSmsFilterSettings;");
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setClientPrefix(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setClientPrefix",
			"(Ljava/lang/String;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setOriginatingNumbers(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOriginatingNumbers",
			"(Ljava/util/List;)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings_Builder::setDestinationPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDestinationPort",
			"(I)Landroid/telephony/VisualVoicemailSmsFilterSettings$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder : public __jni_impl::android::telephony::VisualVoicemailSmsFilterSettings_Builder
	{
	public:
		VisualVoicemailSmsFilterSettings_Builder(QAndroidJniObject obj) { __thiz = obj; }
		VisualVoicemailSmsFilterSettings_Builder()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER

