#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::nio::file
{
	class AccessMode : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::AccessMode EXECUTE();
		static java::nio::file::AccessMode READ();
		static java::nio::file::AccessMode WRITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AccessMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::AccessMode valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file

