#pragma once

#include "./Violation.hpp"

class JClass;

namespace android::os::strictmode
{
	class InstanceCountViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InstanceCountViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		InstanceCountViolation(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getNumberOfInstances();
	};
} // namespace android::os::strictmode

