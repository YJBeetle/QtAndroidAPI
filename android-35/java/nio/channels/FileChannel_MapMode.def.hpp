#pragma once

#include "../../../JObject.hpp"

class JString;

namespace java::nio::channels
{
	class FileChannel_MapMode : public JObject
	{
	public:
		// Fields
		static java::nio::channels::FileChannel_MapMode PRIVATE();
		static java::nio::channels::FileChannel_MapMode READ_ONLY();
		static java::nio::channels::FileChannel_MapMode READ_WRITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileChannel_MapMode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileChannel_MapMode(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace java::nio::channels

