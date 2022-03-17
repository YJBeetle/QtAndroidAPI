#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Rating.def.hpp"

namespace android::media
{
	// Fields
	inline JObject Rating::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Rating",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Rating::RATING_3_STARS()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_3_STARS"
		);
	}
	inline jint Rating::RATING_4_STARS()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_4_STARS"
		);
	}
	inline jint Rating::RATING_5_STARS()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_5_STARS"
		);
	}
	inline jint Rating::RATING_HEART()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_HEART"
		);
	}
	inline jint Rating::RATING_NONE()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_NONE"
		);
	}
	inline jint Rating::RATING_PERCENTAGE()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_PERCENTAGE"
		);
	}
	inline jint Rating::RATING_THUMB_UP_DOWN()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_THUMB_UP_DOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::Rating Rating::newHeartRating(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newHeartRating",
			"(Z)Landroid/media/Rating;",
			arg0
		);
	}
	inline android::media::Rating Rating::newPercentageRating(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newPercentageRating",
			"(F)Landroid/media/Rating;",
			arg0
		);
	}
	inline android::media::Rating Rating::newStarRating(jint arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newStarRating",
			"(IF)Landroid/media/Rating;",
			arg0,
			arg1
		);
	}
	inline android::media::Rating Rating::newThumbRating(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newThumbRating",
			"(Z)Landroid/media/Rating;",
			arg0
		);
	}
	inline android::media::Rating Rating::newUnratedRating(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newUnratedRating",
			"(I)Landroid/media/Rating;",
			arg0
		);
	}
	inline jint Rating::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat Rating::getPercentRating() const
	{
		return callMethod<jfloat>(
			"getPercentRating",
			"()F"
		);
	}
	inline jint Rating::getRatingStyle() const
	{
		return callMethod<jint>(
			"getRatingStyle",
			"()I"
		);
	}
	inline jfloat Rating::getStarRating() const
	{
		return callMethod<jfloat>(
			"getStarRating",
			"()F"
		);
	}
	inline jboolean Rating::hasHeart() const
	{
		return callMethod<jboolean>(
			"hasHeart",
			"()Z"
		);
	}
	inline jboolean Rating::isRated() const
	{
		return callMethod<jboolean>(
			"isRated",
			"()Z"
		);
	}
	inline jboolean Rating::isThumbUp() const
	{
		return callMethod<jboolean>(
			"isThumbUp",
			"()Z"
		);
	}
	inline JString Rating::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Rating::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

