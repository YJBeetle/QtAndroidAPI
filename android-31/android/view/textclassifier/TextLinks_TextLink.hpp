#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
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
		jint describeContents() const;
		jfloat getConfidenceScore(JString arg0) const;
		jint getEnd() const;
		JString getEntity(jint arg0) const;
		jint getEntityCount() const;
		android::os::Bundle getExtras() const;
		jint getStart() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

