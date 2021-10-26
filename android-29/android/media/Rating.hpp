#pragma once

#ifndef ANDROID_MEDIA_RATING
#define ANDROID_MEDIA_RATING

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class Rating : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint RATING_3_STARS();
		static jint RATING_4_STARS();
		static jint RATING_5_STARS();
		static jint RATING_HEART();
		static jint RATING_NONE();
		static jint RATING_PERCENTAGE();
		static jint RATING_THUMB_UP_DOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		static QAndroidJniObject newUnratedRating(jint arg0);
		static QAndroidJniObject newHeartRating(jboolean arg0);
		jboolean hasHeart();
		static QAndroidJniObject newThumbRating(jboolean arg0);
		static QAndroidJniObject newStarRating(jint arg0, jfloat arg1);
		static QAndroidJniObject newPercentageRating(jfloat arg0);
		jboolean isRated();
		jint getRatingStyle();
		jboolean isThumbUp();
		jfloat getStarRating();
		jfloat getPercentRating();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject Rating::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Rating",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Rating::RATING_3_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_3_STARS"
		);
	}
	jint Rating::RATING_4_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_4_STARS"
		);
	}
	jint Rating::RATING_5_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_5_STARS"
		);
	}
	jint Rating::RATING_HEART()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_HEART"
		);
	}
	jint Rating::RATING_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_NONE"
		);
	}
	jint Rating::RATING_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_PERCENTAGE"
		);
	}
	jint Rating::RATING_THUMB_UP_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Rating",
			"RATING_THUMB_UP_DOWN"
		);
	}
	
	// Constructors
	void Rating::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.Rating",
			"(V)V");
	}
	
	// Methods
	jstring Rating::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Rating::newUnratedRating(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.Rating",
			"newUnratedRating",
			"(I)Landroid/media/Rating;",
			arg0
		);
	}
	QAndroidJniObject Rating::newHeartRating(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.Rating",
			"newHeartRating",
			"(Z)Landroid/media/Rating;",
			arg0
		);
	}
	jboolean Rating::hasHeart()
	{
		return __thiz.callMethod<jboolean>(
			"hasHeart",
			"()Z"
		);
	}
	QAndroidJniObject Rating::newThumbRating(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.Rating",
			"newThumbRating",
			"(Z)Landroid/media/Rating;",
			arg0
		);
	}
	QAndroidJniObject Rating::newStarRating(jint arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.Rating",
			"newStarRating",
			"(IF)Landroid/media/Rating;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Rating::newPercentageRating(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.Rating",
			"newPercentageRating",
			"(F)Landroid/media/Rating;",
			arg0
		);
	}
	jboolean Rating::isRated()
	{
		return __thiz.callMethod<jboolean>(
			"isRated",
			"()Z"
		);
	}
	jint Rating::getRatingStyle()
	{
		return __thiz.callMethod<jint>(
			"getRatingStyle",
			"()I"
		);
	}
	jboolean Rating::isThumbUp()
	{
		return __thiz.callMethod<jboolean>(
			"isThumbUp",
			"()Z"
		);
	}
	jfloat Rating::getStarRating()
	{
		return __thiz.callMethod<jfloat>(
			"getStarRating",
			"()F"
		);
	}
	jfloat Rating::getPercentRating()
	{
		return __thiz.callMethod<jfloat>(
			"getPercentRating",
			"()F"
		);
	}
	jint Rating::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Rating::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Rating : public __jni_impl::android::media::Rating
	{
	public:
		Rating(QAndroidJniObject obj) { __thiz = obj; }
		Rating()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_RATING

