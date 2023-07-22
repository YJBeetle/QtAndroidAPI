#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace java::nio::file::attribute
{
	class PosixFilePermissions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PosixFilePermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PosixFilePermissions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject asFileAttribute(JObject arg0);
		static JObject fromString(JString arg0);
		static JString toString(JObject arg0);
	};
} // namespace java::nio::file::attribute

