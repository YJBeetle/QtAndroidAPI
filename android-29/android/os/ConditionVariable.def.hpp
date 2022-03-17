#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class ConditionVariable : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConditionVariable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConditionVariable(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConditionVariable();
		ConditionVariable(jboolean arg0);
		
		// Methods
		jboolean block(jlong arg0) const;
		void block() const;
		void close() const;
		void open() const;
	};
} // namespace android::os

