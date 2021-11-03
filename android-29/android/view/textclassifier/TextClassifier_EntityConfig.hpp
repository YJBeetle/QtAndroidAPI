#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifier_EntityConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifier_EntityConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::textclassifier::TextClassifier_EntityConfig create(JObject arg0, JObject arg1, JObject arg2);
		static android::view::textclassifier::TextClassifier_EntityConfig createWithExplicitEntityList(JObject arg0);
		static android::view::textclassifier::TextClassifier_EntityConfig createWithHints(JObject arg0);
		jint describeContents();
		JObject getHints();
		JObject resolveEntityListModifications(JObject arg0);
		jboolean shouldIncludeTypesFromTextClassifier();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

