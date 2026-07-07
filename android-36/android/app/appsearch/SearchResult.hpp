#pragma once

#include "./GenericDocument.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SearchResult.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject SearchResult::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.SearchResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SearchResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SearchResult::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::appsearch::GenericDocument SearchResult::getGenericDocument() const
	{
		return callObjectMethod(
			"getGenericDocument",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	inline JObject SearchResult::getInformationalRankingSignals() const
	{
		return callObjectMethod(
			"getInformationalRankingSignals",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchResult::getJoinedResults() const
	{
		return callObjectMethod(
			"getJoinedResults",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchResult::getMatchInfos() const
	{
		return callObjectMethod(
			"getMatchInfos",
			"()Ljava/util/List;"
		);
	}
	inline JString SearchResult::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SearchResult::getParentTypeMap() const
	{
		return callObjectMethod(
			"getParentTypeMap",
			"()Ljava/util/Map;"
		);
	}
	inline jdouble SearchResult::getRankingSignal() const
	{
		return callMethod<jdouble>(
			"getRankingSignal",
			"()D"
		);
	}
	inline void SearchResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
