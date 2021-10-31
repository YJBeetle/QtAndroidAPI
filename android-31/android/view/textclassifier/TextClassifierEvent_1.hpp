#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::textclassifier
{
	class TextClassifierEvent_1 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_1(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_1(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::textclassifier

