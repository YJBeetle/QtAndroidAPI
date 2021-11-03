#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextClassificationContext;
}

namespace android::view::textclassifier
{
	class TextClassificationManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassificationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0);
		JObject getTextClassifier();
		void setTextClassificationSessionFactory(JObject arg0);
		void setTextClassifier(JObject arg0);
	};
} // namespace android::view::textclassifier

