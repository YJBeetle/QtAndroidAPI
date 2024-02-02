#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class GrammaticalInflectionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GrammaticalInflectionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GrammaticalInflectionManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getApplicationGrammaticalGender() const;
		void setRequestedApplicationGrammaticalGender(jint arg0) const;
	};
} // namespace android::app

