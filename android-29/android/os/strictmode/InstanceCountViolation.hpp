#pragma once

#include "./Violation.hpp"

class JClass;

namespace android::os::strictmode
{
	class InstanceCountViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InstanceCountViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		InstanceCountViolation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getNumberOfInstances() const;
	};
} // namespace android::os::strictmode

