#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::app
{
	class RemoteInput : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_RESULTS_DATA();
		static JString RESULTS_CLIP_LABEL();
		static jint SOURCE_CHOICE();
		static jint SOURCE_FREE_FORM_INPUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteInput(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void addDataResultToIntent(android::app::RemoteInput arg0, android::content::Intent arg1, JObject arg2);
		static void addResultsToIntent(JArray arg0, android::content::Intent arg1, android::os::Bundle arg2);
		static JObject getDataResultsFromIntent(android::content::Intent arg0, JString arg1);
		static android::os::Bundle getResultsFromIntent(android::content::Intent arg0);
		static jint getResultsSource(android::content::Intent arg0);
		static void setResultsSource(android::content::Intent arg0, jint arg1);
		jint describeContents();
		jboolean getAllowFreeFormInput();
		JObject getAllowedDataTypes();
		JArray getChoices();
		android::os::Bundle getExtras();
		JString getLabel();
		JString getResultKey();
		jboolean isDataOnly();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

