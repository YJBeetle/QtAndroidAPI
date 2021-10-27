#pragma once

#ifndef ANDROID_SERVICE_QUICKSETTINGS_TILE
#define ANDROID_SERVICE_QUICKSETTINGS_TILE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::quicksettings
{
	class Tile : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint STATE_ACTIVE();
		static jint STATE_INACTIVE();
		static jint STATE_UNAVAILABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring getContentDescription();
		QAndroidJniObject getIcon();
		jstring getLabel();
		jint getState();
		jstring getSubtitle();
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
		void setIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		void setLabel(jstring arg0);
		void setLabel(const QString &arg0);
		void setState(jint arg0);
		void setSubtitle(jstring arg0);
		void setSubtitle(const QString &arg0);
		void updateTile();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::quicksettings

#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::quicksettings
{
	// Fields
	QAndroidJniObject Tile::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.quicksettings.Tile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Tile::STATE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_ACTIVE"
		);
	}
	jint Tile::STATE_INACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_INACTIVE"
		);
	}
	jint Tile::STATE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.quicksettings.Tile",
			"STATE_UNAVAILABLE"
		);
	}
	
	// Constructors
	void Tile::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.quicksettings.Tile",
			"(V)V");
	}
	
	// Methods
	jint Tile::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Tile::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Tile::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring Tile::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Tile::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jstring Tile::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Tile::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Tile::setContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Tile::setIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.__jniObject().object()
		);
	}
	void Tile::setLabel(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Tile::setLabel(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setLabel",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Tile::setState(jint arg0)
	{
		__thiz.callMethod<void>(
			"setState",
			"(I)V",
			arg0
		);
	}
	void Tile::setSubtitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Tile::setSubtitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Tile::updateTile()
	{
		__thiz.callMethod<void>(
			"updateTile",
			"()V"
		);
	}
	void Tile::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::quicksettings

namespace android::service::quicksettings
{
	class Tile : public __jni_impl::android::service::quicksettings::Tile
	{
	public:
		Tile(QAndroidJniObject obj) { __thiz = obj; }
		Tile()
		{
			__constructor();
		}
	};
} // namespace android::service::quicksettings

#endif // ANDROID_SERVICE_QUICKSETTINGS_TILE

