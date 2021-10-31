#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class RestrictionEntry : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TYPE_BOOLEAN();
		static jint TYPE_BUNDLE();
		static jint TYPE_BUNDLE_ARRAY();
		static jint TYPE_CHOICE();
		static jint TYPE_INTEGER();
		static jint TYPE_MULTI_SELECT();
		static jint TYPE_NULL();
		static jint TYPE_STRING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RestrictionEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RestrictionEntry(QAndroidJniObject obj);
		
		// Constructors
		RestrictionEntry(android::os::Parcel arg0);
		RestrictionEntry(jint arg0, jstring arg1);
		RestrictionEntry(jstring arg0, jarray arg1);
		RestrictionEntry(jstring arg0, jboolean arg1);
		RestrictionEntry(jstring arg0, jint arg1);
		RestrictionEntry(jstring arg0, jstring arg1);
		
		// Methods
		static android::content::RestrictionEntry createBundleArrayEntry(jstring arg0, jarray arg1);
		static android::content::RestrictionEntry createBundleEntry(jstring arg0, jarray arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getAllSelectedStrings();
		jarray getChoiceEntries();
		jarray getChoiceValues();
		jstring getDescription();
		jint getIntValue();
		jstring getKey();
		jarray getRestrictions();
		jboolean getSelectedState();
		jstring getSelectedString();
		jstring getTitle();
		jint getType();
		jint hashCode();
		void setAllSelectedStrings(jarray arg0);
		void setChoiceEntries(jarray arg0);
		void setChoiceEntries(android::content::Context arg0, jint arg1);
		void setChoiceValues(jarray arg0);
		void setChoiceValues(android::content::Context arg0, jint arg1);
		void setDescription(jstring arg0);
		void setIntValue(jint arg0);
		void setRestrictions(jarray arg0);
		void setSelectedState(jboolean arg0);
		void setSelectedString(jstring arg0);
		void setTitle(jstring arg0);
		void setType(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

