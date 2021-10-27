#include "./PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"
#include "./PlaybackState_CustomAction_Builder.hpp"

namespace android::media::session
{
	// Fields
	
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$CustomAction$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$CustomAction$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject PlaybackState_CustomAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState$CustomAction;"
		);
	}
	QAndroidJniObject PlaybackState_CustomAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$CustomAction$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::session

