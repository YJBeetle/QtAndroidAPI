#pragma once

#include "../../../JObject.hpp"

class JString;

namespace java::nio::charset
{
	class CodingErrorAction : public JObject
	{
	public:
		// Fields
		static java::nio::charset::CodingErrorAction IGNORE();
		static java::nio::charset::CodingErrorAction REPLACE();
		static java::nio::charset::CodingErrorAction REPORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CodingErrorAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CodingErrorAction(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace java::nio::charset

