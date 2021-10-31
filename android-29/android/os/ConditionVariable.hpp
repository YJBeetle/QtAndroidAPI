#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class ConditionVariable : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConditionVariable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConditionVariable(QJniObject obj);
		
		// Constructors
		ConditionVariable();
		ConditionVariable(jboolean arg0);
		
		// Methods
		jboolean block(jlong arg0);
		void block();
		void close();
		void open();
	};
} // namespace android::os

