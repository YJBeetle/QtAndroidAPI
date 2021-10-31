#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class RemoteInput : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint EDIT_CHOICES_BEFORE_SENDING_AUTO();
		static jint EDIT_CHOICES_BEFORE_SENDING_DISABLED();
		static jint EDIT_CHOICES_BEFORE_SENDING_ENABLED();
		static jstring EXTRA_RESULTS_DATA();
		static jstring RESULTS_CLIP_LABEL();
		static jint SOURCE_CHOICE();
		static jint SOURCE_FREE_FORM_INPUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteInput(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteInput(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void addDataResultToIntent(android::app::RemoteInput arg0, android::content::Intent arg1, __JniBaseClass arg2);
		static void addResultsToIntent(jarray arg0, android::content::Intent arg1, android::os::Bundle arg2);
		static __JniBaseClass getDataResultsFromIntent(android::content::Intent arg0, jstring arg1);
		static android::os::Bundle getResultsFromIntent(android::content::Intent arg0);
		static jint getResultsSource(android::content::Intent arg0);
		static void setResultsSource(android::content::Intent arg0, jint arg1);
		jint describeContents();
		jboolean getAllowFreeFormInput();
		__JniBaseClass getAllowedDataTypes();
		jarray getChoices();
		jint getEditChoicesBeforeSending();
		android::os::Bundle getExtras();
		jstring getLabel();
		jstring getResultKey();
		jboolean isDataOnly();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

