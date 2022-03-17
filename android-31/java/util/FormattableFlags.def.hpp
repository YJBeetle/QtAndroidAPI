#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class FormattableFlags : public JObject
	{
	public:
		// Fields
		static jint ALTERNATE();
		static jint LEFT_JUSTIFY();
		static jint UPPERCASE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormattableFlags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormattableFlags(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::util

