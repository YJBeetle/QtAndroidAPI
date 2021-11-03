#include "./Person_Builder.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Person.hpp"

namespace android::app
{
	// Fields
	JObject Person::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Person",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Person::Person(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Person::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Person::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::drawable::Icon Person::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString Person::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	JString Person::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Person::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		);
	}
	jint Person::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Person::isBot()
	{
		return callMethod<jboolean>(
			"isBot",
			"()Z"
		);
	}
	jboolean Person::isImportant()
	{
		return callMethod<jboolean>(
			"isImportant",
			"()Z"
		);
	}
	android::app::Person_Builder Person::toBuilder()
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/app/Person$Builder;"
		);
	}
	void Person::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

