#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Kadra 
{
	class KADRA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define KD_CORE_TRACE(...)    ::Kadra::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KD_CORE_INFO(...)     ::Kadra::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KD_CORE_WARN(...)     ::Kadra::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KD_CORE_ERROR(...)    ::Kadra::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KD_CORE_FATAL(...)    ::Kadra::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define KD_TRACE(...)	      ::Kadra::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KD_INFO(...)	      ::Kadra::Log::GetClientLogger()->info(__VA_ARGS__)
#define KD_WARN(...)	      ::Kadra::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KD_ERROR(...)	      ::Kadra::Log::GetClientLogger()->error(__VA_ARGS__)
#define KD_FATAL(...)	      ::Kadra::Log::GetClientLogger()->fatal(__VA_ARGS__)