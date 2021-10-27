#include "../../os/Parcel.hpp"
#include "./MediaSession_Token.hpp"

namespace android::media::session
{
	// Fields
	QAndroidJniObject MediaSession_Token::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.MediaSession$Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	MediaSession_Token::MediaSession_Token(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint MediaSession_Token::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaSession_Token::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MediaSession_Token::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void MediaSession_Token::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::session

