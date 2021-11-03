#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::textclassifier
{
	class TextSelection_Request : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextSelection_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::LocaleList getDefaultLocales();
		jint getEndIndex();
		jint getStartIndex();
		JString getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

