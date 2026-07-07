#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appsearch
{
	class SearchResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getDatabaseName() const;
		android::app::appsearch::GenericDocument getGenericDocument() const;
		JObject getInformationalRankingSignals() const;
		JObject getJoinedResults() const;
		JObject getMatchInfos() const;
		JString getPackageName() const;
		JObject getParentTypeMap() const;
		jdouble getRankingSignal() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

