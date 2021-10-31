#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "./Tile.hpp"

namespace android::service::quicksettings
{
	// Fields
	__JniBaseClass Tile::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quicksettings.Tile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Tile::STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_ACTIVE"
		);
	}
	jint Tile::STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_INACTIVE"
		);
	}
	jint Tile::STATE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_UNAVAILABLE"
		);
	}
	
	// QAndroidJniObject forward
	Tile::Tile(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Tile::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Tile::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::graphics::drawable::Icon Tile::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring Tile::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Tile::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void Tile::setContentDescription(jstring arg0)
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Tile::setIcon(android::graphics::drawable::Icon arg0)
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void Tile::setLabel(jstring arg0)
	{
		callMethod<void>(
			"setLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Tile::setState(jint arg0)
	{
		callMethod<void>(
			"setState",
			"(I)V",
			arg0
		);
	}
	void Tile::updateTile()
	{
		callMethod<void>(
			"updateTile",
			"()V"
		);
	}
	void Tile::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quicksettings

