#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::textclassifier
{
	class TextLinks_TextLink : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks_TextLink(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_TextLink(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(JString arg0);
		jint getEnd();
		JString getEntity(jint arg0);
		jint getEntityCount();
		jint getStart();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

