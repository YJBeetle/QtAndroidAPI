#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class ClipData_Item;
}
namespace android::content
{
	class ClipDescription;
}
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::content
{
	class ClipData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipData(QAndroidJniObject obj);
		
		// Constructors
		ClipData(android::content::ClipData &arg0);
		ClipData(android::content::ClipDescription arg0, android::content::ClipData_Item arg1);
		ClipData(JString arg0, JArray arg1, android::content::ClipData_Item arg2);
		
		// Methods
		static android::content::ClipData newHtmlText(JString arg0, JString arg1, JString arg2);
		static android::content::ClipData newIntent(JString arg0, android::content::Intent arg1);
		static android::content::ClipData newPlainText(JString arg0, JString arg1);
		static android::content::ClipData newRawUri(JString arg0, android::net::Uri arg1);
		static android::content::ClipData newUri(android::content::ContentResolver arg0, JString arg1, android::net::Uri arg2);
		void addItem(android::content::ClipData_Item arg0);
		void addItem(android::content::ContentResolver arg0, android::content::ClipData_Item arg1);
		jint describeContents();
		android::content::ClipDescription getDescription();
		android::content::ClipData_Item getItemAt(jint arg0);
		jint getItemCount();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

