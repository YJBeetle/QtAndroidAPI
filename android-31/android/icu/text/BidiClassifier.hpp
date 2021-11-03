#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::icu::text
{
	class BidiClassifier : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BidiClassifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidiClassifier(QJniObject obj);
		
		// Constructors
		BidiClassifier(JObject arg0);
		
		// Methods
		jint classify(jint arg0) const;
		JObject getContext() const;
		void setContext(JObject arg0) const;
	};
} // namespace android::icu::text

