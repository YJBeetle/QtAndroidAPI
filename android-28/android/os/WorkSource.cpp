#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WorkSource.hpp"

namespace android::os
{
	// Fields
	JObject WorkSource::CREATOR()
	{
		return getStaticObjectField(
			"android.os.WorkSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	WorkSource::WorkSource(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WorkSource::WorkSource()
		: JObject(
			"android.os.WorkSource",
			"()V"
		) {}
	WorkSource::WorkSource(android::os::WorkSource &arg0)
		: JObject(
			"android.os.WorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean WorkSource::add(android::os::WorkSource arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Landroid/os/WorkSource;)Z",
			arg0.object()
		);
	}
	void WorkSource::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint WorkSource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WorkSource::diff(android::os::WorkSource arg0) const
	{
		return callMethod<jboolean>(
			"diff",
			"(Landroid/os/WorkSource;)Z",
			arg0.object()
		);
	}
	jboolean WorkSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WorkSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WorkSource::remove(android::os::WorkSource arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Landroid/os/WorkSource;)Z",
			arg0.object()
		);
	}
	void WorkSource::set(android::os::WorkSource arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	JString WorkSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WorkSource::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

