#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::content
{
	class RestrictionEntry : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_BOOLEAN();
		static jint TYPE_BUNDLE();
		static jint TYPE_BUNDLE_ARRAY();
		static jint TYPE_CHOICE();
		static jint TYPE_INTEGER();
		static jint TYPE_MULTI_SELECT();
		static jint TYPE_NULL();
		static jint TYPE_STRING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RestrictionEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RestrictionEntry(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RestrictionEntry(android::os::Parcel arg0);
		RestrictionEntry(jint arg0, JString arg1);
		RestrictionEntry(JString arg0, JArray arg1);
		RestrictionEntry(JString arg0, jboolean arg1);
		RestrictionEntry(JString arg0, jint arg1);
		RestrictionEntry(JString arg0, JString arg1);
		
		// Methods
		static android::content::RestrictionEntry createBundleArrayEntry(JString arg0, JArray arg1);
		static android::content::RestrictionEntry createBundleEntry(JString arg0, JArray arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JArray getAllSelectedStrings() const;
		JArray getChoiceEntries() const;
		JArray getChoiceValues() const;
		JString getDescription() const;
		jint getIntValue() const;
		JString getKey() const;
		JArray getRestrictions() const;
		jboolean getSelectedState() const;
		JString getSelectedString() const;
		JString getTitle() const;
		jint getType() const;
		jint hashCode() const;
		void setAllSelectedStrings(JArray arg0) const;
		void setChoiceEntries(JArray arg0) const;
		void setChoiceEntries(android::content::Context arg0, jint arg1) const;
		void setChoiceValues(JArray arg0) const;
		void setChoiceValues(android::content::Context arg0, jint arg1) const;
		void setDescription(JString arg0) const;
		void setIntValue(jint arg0) const;
		void setRestrictions(JArray arg0) const;
		void setSelectedState(jboolean arg0) const;
		void setSelectedString(JString arg0) const;
		void setTitle(JString arg0) const;
		void setType(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

