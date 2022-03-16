#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassificationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0) const;
		JObject getTextClassifier() const;
		void setTextClassificationSessionFactory(JObject arg0) const;
		void setTextClassifier(JObject arg0) const;
	};
} // namespace android::view::textclassifier

