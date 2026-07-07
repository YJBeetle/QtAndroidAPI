#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class PropertyPath;
}
namespace android::app::appsearch
{
	class SearchResult_MatchRange;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::app::appsearch
{
	class SearchResult_MatchInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getExactMatch() const;
		android::app::appsearch::SearchResult_MatchRange getExactMatchRange() const;
		JString getFullText() const;
		JString getPropertyPath() const;
		android::app::appsearch::PropertyPath getPropertyPathObject() const;
		JString getSnippet() const;
		android::app::appsearch::SearchResult_MatchRange getSnippetRange() const;
		JString getSubmatch() const;
		android::app::appsearch::SearchResult_MatchRange getSubmatchRange() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

