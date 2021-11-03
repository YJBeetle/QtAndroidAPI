#pragma once

#include "../../JObject.hpp"


namespace android::widget
{
	class MultiAutoCompleteTextView_CommaTokenizer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiAutoCompleteTextView_CommaTokenizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiAutoCompleteTextView_CommaTokenizer(QAndroidJniObject obj);
		
		// Constructors
		MultiAutoCompleteTextView_CommaTokenizer();
		
		// Methods
		jint findTokenEnd(jstring arg0, jint arg1);
		jint findTokenStart(jstring arg0, jint arg1);
		jstring terminateToken(jstring arg0);
	};
} // namespace android::widget

