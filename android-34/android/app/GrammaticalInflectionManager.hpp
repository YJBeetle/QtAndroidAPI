#pragma once

#include "./GrammaticalInflectionManager.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint GrammaticalInflectionManager::getApplicationGrammaticalGender() const
	{
		return callMethod<jint>(
			"getApplicationGrammaticalGender",
			"()I"
		);
	}
	inline void GrammaticalInflectionManager::setRequestedApplicationGrammaticalGender(jint arg0) const
	{
		callMethod<void>(
			"setRequestedApplicationGrammaticalGender",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
