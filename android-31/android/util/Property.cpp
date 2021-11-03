#include "./Property.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	Property::Property(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Property::Property(jclass arg0, jstring arg1)
		: JObject(
			"android.util.Property",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::Property Property::of(jclass arg0, jclass arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.util.Property",
			"of",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Landroid/util/Property;",
			arg0,
			arg1,
			arg2
		);
	}
	jobject Property::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Property::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass Property::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jboolean Property::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void Property::set(jobject arg0, jobject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace android::util

