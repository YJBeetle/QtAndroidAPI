#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
class JObject;
namespace java::lang
{
	class ProcessBuilder_Redirect_Type;
}

namespace java::lang
{
	class ProcessBuilder_Redirect : public JObject
	{
	public:
		// Fields
		static java::lang::ProcessBuilder_Redirect DISCARD();
		static java::lang::ProcessBuilder_Redirect INHERIT();
		static java::lang::ProcessBuilder_Redirect PIPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProcessBuilder_Redirect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder_Redirect(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::ProcessBuilder_Redirect appendTo(java::io::File arg0);
		static java::lang::ProcessBuilder_Redirect from(java::io::File arg0);
		static java::lang::ProcessBuilder_Redirect to(java::io::File arg0);
		jboolean equals(JObject arg0) const;
		java::io::File file() const;
		jint hashCode() const;
		java::lang::ProcessBuilder_Redirect_Type type() const;
	};
} // namespace java::lang

