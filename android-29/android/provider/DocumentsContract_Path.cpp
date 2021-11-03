#include "../os/Parcel.hpp"
#include "./DocumentsContract_Path.hpp"

namespace android::provider
{
	// Fields
	JObject DocumentsContract_Path::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Path",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DocumentsContract_Path::DocumentsContract_Path(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DocumentsContract_Path::DocumentsContract_Path(jstring arg0, JObject arg1)
		: JObject(
			"android.provider.DocumentsContract$Path",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint DocumentsContract_Path::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DocumentsContract_Path::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject DocumentsContract_Path::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/util/List;"
		);
	}
	jstring DocumentsContract_Path::getRootId()
	{
		return callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DocumentsContract_Path::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DocumentsContract_Path::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DocumentsContract_Path::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

