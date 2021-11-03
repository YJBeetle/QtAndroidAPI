#pragma once

#include "../../io/FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace java::util::zip
{
	class CheckedOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CheckedOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		CheckedOutputStream(QAndroidJniObject obj);
		
		// Constructors
		CheckedOutputStream(java::io::OutputStream arg0, JObject arg1);
		
		// Methods
		JObject getChecksum() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip

