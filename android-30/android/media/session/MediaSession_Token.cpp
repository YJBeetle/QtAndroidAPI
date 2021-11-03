#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "./MediaSession_Token.hpp"

namespace android::media::session
{
	// Fields
	JObject MediaSession_Token::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.MediaSession$Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	MediaSession_Token::MediaSession_Token(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaSession_Token::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaSession_Token::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MediaSession_Token::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void MediaSession_Token::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

