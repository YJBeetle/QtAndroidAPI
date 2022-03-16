#include "./Person_Builder.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	
	// Methods
	jint Person::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::drawable::Icon Person::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString Person::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	JString Person::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Person::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		);
	}
	jboolean Person::isBot() const
	{
		return callMethod<jboolean>(
			"isBot",
			"()Z"
		);
	}
	jboolean Person::isImportant() const
	{
		return callMethod<jboolean>(
			"isImportant",
			"()Z"
		);
	}
	android::app::Person_Builder Person::toBuilder() const
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/app/Person$Builder;"
		);
	}
	void Person::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

