#pragma once

#ifndef ANDROID_TELEPHONY_SUBSCRIPTIONINFO
#define ANDROID_TELEPHONY_SUBSCRIPTIONINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class SubscriptionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getDisplayName();
		QAndroidJniObject getNumber();
		jint getSimSlotIndex();
		QAndroidJniObject getIccId();
		QAndroidJniObject getCarrierName();
		QAndroidJniObject createIconBitmap(__jni_impl::android::content::Context arg0);
		jint getIconTint();
		jint getDataRoaming();
		jboolean isEmbedded();
		jboolean isOpportunistic();
		QAndroidJniObject getGroupUuid();
		jint getSubscriptionType();
		jint getCardId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getMcc();
		jint getMnc();
		jint getCarrierId();
		jint getSubscriptionId();
		QAndroidJniObject getMccString();
		QAndroidJniObject getMncString();
		QAndroidJniObject getCountryIso();
	};
} // namespace __jni_impl::android::telephony

#include "../graphics/Bitmap.hpp"
#include "../content/Context.hpp"
#include "../os/ParcelUuid.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject SubscriptionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void SubscriptionInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SubscriptionInfo",
			"(V)V");
	}
	
	// Methods
	jboolean SubscriptionInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject SubscriptionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SubscriptionInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject SubscriptionInfo::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject SubscriptionInfo::getNumber()
	{
		return __thiz.callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;");
	}
	jint SubscriptionInfo::getSimSlotIndex()
	{
		return __thiz.callMethod<jint>(
			"getSimSlotIndex",
			"()I");
	}
	QAndroidJniObject SubscriptionInfo::getIccId()
	{
		return __thiz.callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SubscriptionInfo::getCarrierName()
	{
		return __thiz.callObjectMethod(
			"getCarrierName",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject SubscriptionInfo::createIconBitmap(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"createIconBitmap",
			"(Landroid/content/Context;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object());
	}
	jint SubscriptionInfo::getIconTint()
	{
		return __thiz.callMethod<jint>(
			"getIconTint",
			"()I");
	}
	jint SubscriptionInfo::getDataRoaming()
	{
		return __thiz.callMethod<jint>(
			"getDataRoaming",
			"()I");
	}
	jboolean SubscriptionInfo::isEmbedded()
	{
		return __thiz.callMethod<jboolean>(
			"isEmbedded",
			"()Z");
	}
	jboolean SubscriptionInfo::isOpportunistic()
	{
		return __thiz.callMethod<jboolean>(
			"isOpportunistic",
			"()Z");
	}
	QAndroidJniObject SubscriptionInfo::getGroupUuid()
	{
		return __thiz.callObjectMethod(
			"getGroupUuid",
			"()Landroid/os/ParcelUuid;");
	}
	jint SubscriptionInfo::getSubscriptionType()
	{
		return __thiz.callMethod<jint>(
			"getSubscriptionType",
			"()I");
	}
	jint SubscriptionInfo::getCardId()
	{
		return __thiz.callMethod<jint>(
			"getCardId",
			"()I");
	}
	jint SubscriptionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SubscriptionInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint SubscriptionInfo::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I");
	}
	jint SubscriptionInfo::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I");
	}
	jint SubscriptionInfo::getCarrierId()
	{
		return __thiz.callMethod<jint>(
			"getCarrierId",
			"()I");
	}
	jint SubscriptionInfo::getSubscriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSubscriptionId",
			"()I");
	}
	QAndroidJniObject SubscriptionInfo::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SubscriptionInfo::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SubscriptionInfo::getCountryIso()
	{
		return __thiz.callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SubscriptionInfo : public __jni_impl::android::telephony::SubscriptionInfo
	{
	public:
		SubscriptionInfo(QAndroidJniObject obj) { __thiz = obj; }
		SubscriptionInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SUBSCRIPTIONINFO

