#include "../../os/Parcel.hpp"
#include "./MediaSession_Token.hpp"

namespace android::media::session
{
	// Fields
	__JniBaseClass MediaSession_Token::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.MediaSession$Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	MediaSession_Token::MediaSession_Token(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaSession_Token::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaSession_Token::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MediaSession_Token::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void MediaSession_Token::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

